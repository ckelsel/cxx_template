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

//
// Section 11.5
//
#include <iostream>
using namespace std;

template<typename T>
class S {
public:
    S (T b) : m_(b) {
    }
private:
    T m_;
};

template<typename T>
void f(T t)
{
}

int main(int argc, char **argv)
{
    f(12);

    //error: missing template arguments before ‘x’
    //S x(12);

    S<int> x(12);
    return 0;
}
