# PyCppProject
Mixed programming using Python and Cpp
---

- build Cpp as Modules for Python

  ```shell
  cd Python
  python setup.py build_ext --inplace
  ```

- test python

  ```shell
  python test.py
  ```

- Build Cpp as Libs for Python

  ```shell
  cd build_lib_demo
  ```

  use Setup.py build Cpp source code as Python libs.
  ```
  pip install .
  ```

  test

  ```shell
  python test.py
  ```
  
  

