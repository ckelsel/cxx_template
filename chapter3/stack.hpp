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

#include <vector>

template <typename T>
//class Stack<T> {  //error 1
class Stack {

public:

    void Push(T const& t);

    void Pop();

    T Top() const;

    bool empty() const {
        return elements_.empty();
    };

private:

    std::vector<T>  elements_;
};

template <typename T>
//   Stack::Push(T const &t) error 2
void Stack<T>::Push(T const &t)
{
    elements_.push_back(t);
}

template <typename T>
void Stack<T>::Pop()
{
    elements_.pop_back();
}

template <typename T>
T Stack<T>::Top() const
{
    return elements_.back();
}
