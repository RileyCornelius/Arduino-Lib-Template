# Arduino + PlatformIO Library Template

An Arduino library template for PlatformIO development that lets you build, run examples, and execute tests from a single workspace.

## Getting Started

1. **Rename the library** by updating these files:
	 - `src/` files (`MyLib.cpp`, headers) → rename the class to match your library name
	 - `library.json` → `name`, `version`,`description`, `keywords`, `repository.url`, etc
	 - `library.properties` → `name`, `version`, `author`, `sentence`, `paragraph`, etc

## Project Layout

```
.
├── examples/           # Example sketches (use subfolders per example)
├── src/                # Library sources (C++ headers and implementation)
│   └── MyLib.h
├── test/               # PlatformIO unit or integration tests
├── library.json        # PlatformIO library manifest
├── library.properties  # Arduino Library Manager metadata
├── platformio.ini      # Run examples and test configuration
└── README.md           # Project info
```

### Running Examples

Set `src_dir` in `platformio.ini` to the example you want to run:

```ini
[platformio]
src_dir = examples/blink
```

Build and upload:

```bash
pio run --target upload
```

### Unit Testing

Run tests under `test/` folder: 

```bash
pio test
```

**Note**: the `src_dir` line in `platformio.ini` must be commented out for tests to compile.

## Publishing

### Arduino

Read the [FAQ](https://github.com/arduino/library-registry/blob/main/FAQ.md) and [Arduino Library Manager](https://github.com/arduino/library-registry/blob/main/README.md) README, then follow the instructions to publish your library. Once published, updates will be handled by the `arduino-lint.yml` GitHub workflow whenever you create a new release.

1. Update `library.properties` with current information and commit the changes.
2. Create a git tag and release that matches the version listed in `library.properties`.
3. Publishing the release triggers the `arduino-lint.yml` workflow to update the library registry.

### PlatformIO

You can publish to the PlatformIO Registry entirely from the CLI. More info is available [here](https://docs.platformio.org/en/latest/librarymanager/creating.html#publishing).

1. Update `library.json` with current information and commit the changes.
2. Create a git tag that matches the version in `library.json`. Creating a release is recommended, but optional.
3. Open a PlatformIO CLI terminal.
4. Run `pio account login` and sign in to your PlatformIO account.
5. Run `pio package pack` to create a local copy of the package and verify its contents (delete the archive afterwards).
6. Run `pio package publish` to publish the package.


## Additional Resources

### Official Docs

- [PlatformIO Library Docs](https://docs.platformio.org/en/latest/librarymanager/creating.html)
- [Arduino Library Docs](https://docs.arduino.cc/learn/contributions/arduino-creating-library-guide/)

### Library Metadata

- [library.properties](https://arduino.github.io/arduino-cli/library-specification/) - Arduino
- [library.json](https://docs.platformio.org/en/latest/manifests/library-json/index.html#library-json) - PlatformIO