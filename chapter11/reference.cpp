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
#include <typeinfo>
using namespace std;

template <typename T> void f(T t)
{
    cout << typeid(t).name() << endl;
}

template <typename T> void g(T& t)
{
    cout << typeid(t).name() << endl;
}

double x[20];

int const seven = 7;

int main(int argc, char **argv)
{
    //Pd, pointer double
    f(x);
    //A20_d, double[20]
    g(x);

    f(seven);
    g(seven);

    //f(7);
    //g(7);

    //PKc
    f("Apple");
    //PKc
    f("pear");

    //A6_c
    g("Apple");
    //A5_c
    g("pear");
    return 0;
}
