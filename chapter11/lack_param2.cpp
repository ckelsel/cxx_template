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
void f(T x= 42)
{
}

int main(int argc, char **argv)
{
    //ok
    f<double>();

    //ok
    f<int>();

    //lack_param2.cpp: In function ‘int main(int, char**)’:
    //lack_param2.cpp:32:7: error: no matching function for call to ‘f()’
    //f();
    //
    //lack_param2.cpp:32:7: note: candidate is:
    //lack_param2.cpp:20:6: note: template<class T> void f(T)
    //void f(T x= 42)
    //
    //lack_param2.cpp:20:6: note:   template argument deduction/substitution failed:
    //lack_param2.cpp:32:7: note:   couldn't deduce template parameter ‘T’
    f();
    return 0;
}
