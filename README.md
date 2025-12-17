# WWII Enigma Machine Simulation (C)

This project is a C-based simulation of a **World War II–era Enigma encryption machine**, implemented using multiple rotors, character mappings, and mechanical-style rotor stepping.
It supports **both encryption and decryption**, closely mirroring the reversible nature of the original Enigma cipher.

---

## Features

* Five-rotor Enigma-style architecture
* Deterministic and reversible encryption
* Rotor stepping logic (primary, secondary, and tertiary rotations)
* Pointer-based rotor wiring to simulate physical signal paths
* File-based encryption and decryption
* Menu-driven CLI interface

---

## How It Works (High-Level)

* Each rotor contains:

  * A character (`data`)
  * A pointer to another rotor’s character (`ptr`), simulating wiring
* During encryption:

  1. A character passes sequentially through Rotor 1 → Rotor 5
  2. The output character is written to a file
  3. Rotors rotate after each character, similar to a mechanical Enigma
* During decryption:

  * The inverse wiring is used
  * The **same rotor stepping logic** guarantees correct reversal

Because the Enigma cipher is symmetric, **the same configuration is required** for both encryption and decryption.

---

## File Structure

```
.
├── enigma.c              # Main source code
├── Encrypted_Text.txt    # Output file for encrypted text
├── Decrypted_Text.txt    # Output file for decrypted text
└── README.md
```

---

## Compilation

Use any standard C compiler (GCC recommended):

```bash
gcc enigma.c -o enigma
```

---

## Usage

Run the program:

```bash
./enigma
```

You will see a menu:

```
1. Encryption
2. Decryption
3. Exit
```

### Encryption

* Select option `1`
* Enter words (uppercase letters recommended)
* Type `.` to stop input
* Encrypted text is appended to `Encrypted_Text.txt`

### Decryption

* Select option `2`
* Reads from `Encrypted_Text.txt`
* Decrypted output is written to `Decrypted_Text.txt`

---

## Notes & Constraints

* Input is designed for **uppercase A–Z characters**
* Rotor wiring is hardcoded (historically inspired but not an exact Enigma model)
* No plugboard implementation (by design)
* The encryption is **not cryptographically secure** by modern standards

---

## Future Improvements

* Plugboard implementation
* Configurable rotor wirings
* Ring settings and rotor offsets
* Support for lowercase and punctuation
* Better memory safety and input handling

---

## License

This project is open source and available under the MIT License.
