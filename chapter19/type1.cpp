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
#include <iostream>
using namespace std;

template <typename T>
class IsFundT {
public:
    enum { yes = 0, no = 1};
};

#define MK_FUND_TYPE(T) \
    template<>          \
    class IsFundT<T> {  \
    public:     /* error 2 */        \
        enum { yes = 1, no = 0}; \
    };

MK_FUND_TYPE(bool)

#undef MK_FUND_TYPE

template <typename T>
void test(T const &t)
{
    if (IsFundT<T>::yes) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

class MyClass {
};

int main(int argc, char **argv)
{
    test<bool>(true);


    //test(MyClass); error 1
    test(MyClass());
    return 0;
}
