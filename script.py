import _core

# Create an instance of the HarmonicOscillator class
ho = _core.HarmonicOscillator()

# Perform integration
result = ho.integrate(0.01, 1000, [1, 0])

# Print the result
print("Integration result:", result)

