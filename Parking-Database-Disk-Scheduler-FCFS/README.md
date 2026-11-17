# Parking Database Disk Scheduler – FCFS

## Project Description

This project implements the First Come First Serve (FCFS) disk scheduling algorithm using C.

A parking management system stores vehicle entry and exit records on a disk. Multiple disk access requests are generated when these records need to be retrieved. The FCFS algorithm processes the disk requests in the same order in which they arrive.

## Objectives

- Accept the initial disk-head position.
- Accept the number of disk access requests.
- Read the disk request positions.
- Process requests in their arrival order using FCFS.
- Display the disk-head movement sequence.
- Display each individual head movement.
- Calculate the total and average head movement.

## Files

- `fcfs_disk_scheduling.c` – C source code.
- `output.txt` – Sample program output.
- `README.md` – Project documentation.

## Algorithm

1. Start the program.
2. Read the initial disk-head position.
3. Read the number of disk requests.
4. Read all disk request positions.
5. Check that the entered positions and request count are valid.
6. Set the current head position to the initial disk-head position.
7. Process each request in its arrival order without sorting.
8. Calculate the movement as the absolute difference between the current head position and the requested position.
9. Add each movement to the total head movement.
10. Update the current head position to the processed request.
11. Display the request order, movement table, and movement sequence.
12. Display the total and average head movement.
13. Stop the program.

## Sample Input

- Initial disk-head position: `50`
- Number of requests: `7`
- Request sequence: `82 170 43 140 24 16 190`

## Sample Output

See [`output.txt`](output.txt) for the complete sample output.

## Head Movement Calculation

The total head movement is calculated by adding the absolute differences between consecutive head positions:

`|50 - 82| + |82 - 170| + |170 - 43| + |43 - 140| + |140 - 24| + |24 - 16| + |16 - 190|`

`= 32 + 88 + 127 + 97 + 116 + 8 + 174`

**Total Head Movement = 642 cylinders**

Average head movement:

`642 / 7 = 91.71 cylinders`

## How to Compile and Run

Using GCC:

```bash
gcc fcfs_disk_scheduling.c -o fcfs
```

On Windows:

```bash
fcfs.exe
```

On Linux or macOS:

```bash
./fcfs
```

## Result

The FCFS disk scheduling algorithm was implemented in C. The disk requests were processed in their arrival order, and the total head movement for the sample input was calculated as **642 cylinders**.

## Technologies Used

- C Programming Language
- GCC Compiler
- Visual Studio Code
