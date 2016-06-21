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
#include "stack.hpp"

using namespace std;

int main(int argc, char **argv)
{
    try {
    Stack<int, 2> intStack;

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    cout << intStack.top() << endl;
    intStack.pop();

    cout << intStack.top() << endl;
    intStack.pop();

    cout << intStack.top() << endl;
    intStack.pop();
    } catch (std::exception const &ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
