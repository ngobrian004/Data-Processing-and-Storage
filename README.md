# Data Processing and Storage
A simple memory database with transaction support for CIS4930.
# Usage
These instructions assume you have the g++ compiler installed on your device.
To use, all you need to do is to clone the repository to your device and navigate to the project directory.
Then, run this command to compile it:
```sh
g++ main.cpp InMemoryDB.cpp -o Memory_Test
```
You then can run the test with:
```sh
./Memory_Test
```
You can modify the main.cpp to test for different cases, but at base it follows Fig 2 of the assignment.

# Potential Changes for the Future
In order for this assignment to become an official assignment, I think you should narrow the assignment to a single coding language and have the students follow a set file structure in order to implement autograding. This would also allow you to provide the test cases that will be ran so the students are not annoyed by the unclear grading criteria since "4 points for working code" is vague.
You should also clarify some of the instructions, because there are some inconsistencies with "get(key)" returning an int and the instructions saying get should return null if the key is not found. I made it so get returns -1 if not found, but I do not know if that is the intended output. Additional parameters for inputs would also be nice, since I do not know if put(key, -1) is a valid input.
