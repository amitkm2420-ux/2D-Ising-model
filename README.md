# 2D-Ising-model


# 2D Ising Model Simulation

A Python implementation of the 2D Ising model with phase transition analysis and visualization.

## Overview

The 2D Ising model is a fundamental system in statistical mechanics that demonstrates phase transitions. This project simulates magnetic spins on a 2D lattice and studies the ferromagnetic-to-paramagnetic transition at the critical temperature.

## Features

- **Monte Carlo simulation** using Metropolis algorithm
- **Variable temperature** analysis (T < Tc, T = Tc, T > Tc)
- **Magnetization tracking** and phase transition visualization
- **Critical phenomena** analysis

## Physics

- **Critical Temperature**: Tc ≈ 2.269 J/kB
- **Phase Transition**: Ferromagnetic (T < Tc) → Paramagnetic (T > Tc)
- **Algorithm**: Metropolis Monte Carlo with periodic boundary conditions

## Key Observables

- **Magnetization (M)**: Average alignment of spins
- **Energy (E)**: Total system energy
- **Specific Heat (C)**: Energy fluctuations
- **Magnetic Susceptibility (χ)**: Response to external field

## Results

The simulation reproduces:
- Spontaneous magnetization below Tc
- Critical behavior at Tc

## References

- Onsager, L. (1944). "Crystal Statistics. I. A Two-Dimensional Model with an Order-Disorder Transition"
- Landau & Lifshitz. "Statistical Physics"

## License

MIT License - see LICENSE file for details

## Author
Amit Kumar
