# Lottery Schedueler Results

## Setup
- 3 child processes
- Tickets: 10, 20 , 30
- CPU-bound infinited loop workload
- Measured with about 500 and 3000 ticks
    - with sleep for 1 tick before printing results
- Use "explottery" for trial testing

## Work Results
- Trial 500
    - Tickets 10 did 49713 loops
    - Tickets 20 did 91128 loops
    - Tickets 30 did 140743 loops
- Trial 3000
    - Tickets 10 did 275144 loops
    - Tickets 20 did 535487 loops
    - Tickets 30 did 798248 loops


## Observed Ratios
- Trial 500
    - 1 : 1.83 : 2.83

- Trial 3000
    - 1 : 1.95 : 2.90

## Notes
- As runtime increases, the ratios begin to converge to a 1:2:3 ratio
- Short runs have higher variance becuase of randomness
- Longer runs begin to converge because they have reduced variance and start to show the actual proportion

