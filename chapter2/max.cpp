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

namespace Test {
template <class T>
T max(T m, T n)
{
    return m > n ? m : n;
}

/*
 * inline
 * param: const &
 * return: const &
 */
template <typename T>
inline T const & max2(T const &a, T const &b)
{
    return a < b ? b : a;
}
};

int main(int argc, char **argv)
{

    cout << " max = " << Test::max(1, 2) << endl;
    cout << " max = " << Test::max2(1, 2) << endl;

    double m = 1.2;
    double n = 3.2;
    cout << " max = " << Test::max(m, n) << endl;
    cout << " max = " << Test::max2(m, n) << endl;

    cout << " max = " << Test::max(static_cast<double>(1), n) << endl;

    cout << " max = " << Test::max<double>(1, n) << endl;

    return 0;
}
