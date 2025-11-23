# TransactCore-C

**TransactCore-C** — Core transaction engine implemented in **C** with **SQLite** persistence.

**Tech:** C | SQLite | Structured Programming | Transactions | CLI

## Project summary
TransactCore-C is a compact, production-minded transaction-processing engine written in C.  
It demonstrates systems programming concepts and reliable database integration using SQLite. The program supports account creation, deposits, withdrawals, transfers, and maintains timestamped transaction logs — making it suitable for showcasing C + SQL skills on a resume or GitHub portfolio.

## Features
- Create accounts with unique IDs and initial balance.
- Deposit, withdraw, and transfer funds between accounts.
- Transaction logging (DEPOSIT, WITHDRAW, TRANSFER_IN, TRANSFER_OUT) with timestamps.
- Uses SQLite for persistent storage and relational integrity (foreign keys).
- Safe multi-step transfers implemented with SQL transactions (BEGIN / COMMIT / ROLLBACK).
- Simple menu-driven CLI for demonstration and manual testing.

---
## Files
- `transactcore_c_sqlite.c` — C source code (single-file implementation; easy to expand).
- `schema.sql` — SQL schema for the database tables (accounts, transactions).
- `README.md` — This file.
- `.gitignore` — recommended ignores (database files).
- `resume_bullets.txt` / `resume_line.txt` — copy-ready resume text.

---

## Quickstart (Linux / WSL / macOS)
1. Install sqlite dev library (Ubuntu/Debian):
```bash
sudo apt-get update
sudo apt-get install libsqlite3-dev

Compile:
gcc transactcore_c_sqlite.c -o transactcore -lsqlite3
Run:
./transactcore transactcore.db

Example usage
Create an account → get the account ID
Deposit into account ID 1 → check new balance
Transfer from account 1 to account 2 → verify both balances and transactions

Schema (reference)
schema.sql — contains:
CREATE TABLE accounts (...);
CREATE TABLE transactions (...);

#LIPSA PATTANAIK | ITER SOA UNIVERSITY

