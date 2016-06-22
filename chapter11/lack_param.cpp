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
void init(T* loc, T const& val=T())
{
    *loc = val;
}

class S {
public:
    S(){}
    S(int, int){}
};

S one(1, 1);

int main(int argc, char **argv)
{
    init(&one, S(2,3));

    //init(&one, S());
    init(&one);
    return 0;
}
