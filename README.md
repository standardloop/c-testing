# c-testing

[https://github.com/standardloop/c-testing](https://github.com/standardloop/c-testing)

[![GitHub Release](https://img.shields.io/github/v/release/standardloop/c-testing?sort=semver)](https://github.com/standardloop/c-testing/releases) ![C Version](https://img.shields.io/badge/C_Standard-C17-00599C?logo=c&logoColor=white)

## About

Repo for testing library for C.

## Example

### Program

```c
#include <standardloop/testing.h>

int main(void)
{
    TestingInit();
    TestCaseVerify(true, "will pass", 1 == 1);
    TestCaseVerify(true, "will fail", 1 == 0);
    TestCaseVerify(false, "will not run", 1 == 0);
    TestingTearDown();
}
```

### Output

```txt
[2026-09-18 22:59:23] Starting test run.....
Test: "will fail" Failed! (1 == 0) in testing.test.c at line 7
Test: "will not run" Skipped! (1 == 0) in testing.test.c at line 8
--------results--------
passed:   1
failed:   1
skipped:  1
-----------------------
[2026-09-18 22:59:23] Done!
```

## Running

This repo uses [task](https://github.com/go-task/task).

Please run the default `task` to see all the avaiable `tasks`

## Available Tasks

<!-- TASKS_START -->

```sh
task: Available tasks for this project:
* default
* dependencies
* release
* test:build
* test:run
* test:build-sanitize
* test:run-sanitize
* clean
* fmt
* docs
* test:leaks            Run macOS leaks on the test program.
```

<!-- TASKS_END -->

## Building

```sh
$ task test:build
$ ./test
$ task test:build-sanitize
$ ./test-sanitize
```

### Dependencies

#### Using `mise`

```sh
$ mise install
$ eval "$(mise activate bash)"
# when done
$ mise deactivate
$ mise prune
$ mise cache clean
```

#### Using `brew` and `npm`

```sh
$ brew install \
    prek \
    go-task \
    doxygen

$ npm install moxygen -g
```

## Releasing

Releases are handled via GitHub Actions.

## Docs

Docs are generated a first generated with `doxygen` as `xml` and then `moxygen` reads the xml to output markdown in the `docs/` folder.

This repo uses reusable tasks from https://github.com/standardloop/taskfiles/

## Precommit

This repo uses [prek](https://github.com/j178/prek).

Please run `prek install`.
