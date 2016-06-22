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
inline T const& max(T const &a, T const &b)
{
    return a > b ? a : b;
}

int main(int argc, char **argv)
{
    double m = 1.0, n = 2.2;

    cout << ::max<double>(m, n) << endl;
    cout << ::max(m, n) << endl;
    cout << ::max<int>(m, n) << endl;

    return 0;
}
