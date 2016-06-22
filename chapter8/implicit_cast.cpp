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

template <typename DT, typename ST>
inline DT const& implicit_cast(ST const &x)
{
    return x;
}


template <typename ST, typename DT>
inline DT const& implicit_cast2(ST const &x)
{
    return x;
}

int main(int argc, char **argv)
{
    int m = 1;
    double n;

    n = implicit_cast<int>(m);
    cout << n << endl;

    n = implicit_cast2<int, double>(m);
    cout << n << endl;
    return 0;
}
