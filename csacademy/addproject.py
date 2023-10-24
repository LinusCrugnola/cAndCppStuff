import os
import sys

def create_project(project_name):
    # Check if the project directory already exists
    if os.path.exists(project_name):
        print(f"Project '{project_name}' already exists.")
        return

    # Create the project directory
    os.mkdir(project_name)
    print(f"Created project '{project_name}'.")

    # Create the C++ file (name.cpp) with the desired content
    cpp_code = """#include <bits/stdc++.h>

using namespace std;

int main(int argc, char ** argv)
{
    return 0;
}
"""
    cpp_filename = os.path.join(project_name, f"{project_name}.cpp")
    with open(cpp_filename, 'w') as cpp_file:
        cpp_file.write(cpp_code)

    print(f"Created {project_name}.cpp")

    # Create the Makefile with the desired content
    makefile_content = f"""{project_name}: {project_name}.cpp
\tc++ -std=c++17 -O3 {project_name}.cpp -o {project_name}.out -Wall -Wextra -O3
clean:
\trm -r -f {project_name}.out
"""
    makefile_filename = os.path.join(project_name, "Makefile")
    with open(makefile_filename, 'w') as makefile:
        makefile.write(makefile_content)

    print("Created Makefile")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python create_project.py project_name")
        sys.exit(1)

    project_name = sys.argv[1]
    create_project(project_name)