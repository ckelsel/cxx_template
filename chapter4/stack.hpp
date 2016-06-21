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

#include <stdexcept>

template <class T, int MAXSIZE>
class Stack {
public:
    Stack() {
        nums_ = 0;
    }

    void push(T const &);
    
    void pop();

    T top() const;

    bool empty() const {
        return nums_ == 0;
    };

    bool full() const {
        return nums_ == MAXSIZE;
    };

private:
    T elems_[MAXSIZE];
    int nums_;
};

template <class T, int MAXSIZE>
//void Stack<T> error 1
void Stack<T, MAXSIZE>::push(T const &t)
{
    if (!full()) {
        elems_[nums_++] = t;
    }
}

template <class T, int MAXSIZE>
void Stack<T, MAXSIZE>::pop()
{
    if (!empty()) {
        nums_--;
    }
}

template <class T, int MAXSIZE>
T Stack<T, MAXSIZE>::top() const
{
    if (!empty()) {
        return elems_[nums_ - 1];
    } else {
        throw std::out_of_range("Stack<>::top empty");
    }
}
