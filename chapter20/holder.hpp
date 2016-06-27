/* Copyright 2016 kunming.xie
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

template <typename T>
class holder {
public:
    holder() : ptr_(0){}

    explicit holder(T *t) : ptr_(t){}

    // error 3
    ~holder() {
        if (ptr_) {
            delete ptr_;
        }
    }

#if 0
    // error 1
    // -> return T*
    T& operator->() {
        return *ptr_;
    }
#else
    T* operator* () const {
        return ptr_;
    }
#endif
    
    T* get() const {
        return ptr_;
    }

#if 0
    // error 2
    void release() {
        if (ptr_) {
            delete ptr_;
        }
    }
#else
    // --ref
    void release() {
        ptr_ = 0;
    }
#endif

    T* release_and_ret() {
        T *ret = ptr_;
        ptr_ = 0;
        return ret;
    }

private:
    T   *ptr_;

private:
    // error 4
    holder(holder<T> const &);

    // error 5
    holder<T> & operator =(holder<T> const &);
};

