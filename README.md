# c-template

[https://github.com/standardloop/c-template](https://github.com/standardloop/c-template)

[![GitHub Release](https://img.shields.io/github/v/release/standardloop/c-template?sort=semver)](https://github.com/standardloop/c-template/releases) ![C Version](https://img.shields.io/badge/C_Standard-C17-00599C?logo=c&logoColor=white)

## About

Template repo to spawn C projects from.

## Running

This repo uses [task](https://github.com/go-task/task).

Please run the default `task` to see all the avaiable `tasks`

```sh
$ task --list-all
task: Available tasks for this project:
* default:                   Show all avaiable tasks.
* test:                      Build and Run the test program.
* release:build:             Build the dylib.
* remote:download:           Download the released dylib from the GitHub release.
* remote:move:               Move the dylib and header file into paths for other programs to access.
* test:build:                Build the test program.
* test:build-sanitize:       Build the test with address sanitizer on.
* test:leaks:                Run macOS leaks on the test program.
* test:run:                  Run the test program.
```

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
