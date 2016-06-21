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

inline int const& max(int const& a, int const& b)
{
    cout << "int max," << a <<", " << b << endl;
    return a > b ? a : b;
}

template <class T>
inline T const& max(T const& a, T const& b)
{
    cout << "T max," << a <<", " << b << endl;
    return a > b ? a : b;
}


int main(int argc, char **argv)
{
    ::max(1, 2);
    ::max(2.0, 3.0);
    ::max<>(3, 2);
    ::max<double>(3, 2.0);
    ::max(1.2, 'a');
    ::max(1.2, 33);
    return 0;
}
