# Benchmarks

The following benchmark results compare the performance of [TreeSitter](https://tree-sitter.github.io/tree-sitter/) and [Particle](https://github.com/alecthomas/participle) parser implementations.

Environment:

```bash
goos: linux
goarch: amd64
pkg: github.com/smtx/smtv/benchmarks
cpu: AMD Ryzen 5 3500U with Radeon Vega Mobile Gfx
```

To run the benchmarks, use:

```bash
go test ./benchmarks -bench=.
```

Results from running the benchmark on a sample TOML input file:

| Parser Implementation | Operations/sec | Average Time | Memory | Allocations |
| --- | --- | --- | --- | --- |
| TreeSitter | 2654 | 387825 ns/op | 2684 B/op | 22 allocs/op |
| Particle | 1845 | 595238 ns/op | 146712 B/op | 1765 allocs/op |

Analysis of the benchmark results reveals significant performance differences between the TreeSitter and Particle parser implementations:

## Processing Speed

TreeSitter demonstrates superior performance with 2,654 operations per second compared to Particle's 1,845 operations per second. This represents approximately a 44% higher throughput for TreeSitter.

## Latency

TreeSitter processes each operation in 387,825 nanoseconds on average, while Particle requires 595,238 nanoseconds. This indicates that TreeSitter is about 35% faster in terms of processing time per operation.

## Memory Efficiency

TreeSitter shows remarkable memory efficiency:

- Memory Usage: TreeSitter uses only 2,684 bytes per operation compared to Particle's 146,712 bytes - a 98% reduction in memory consumption
- Memory Allocations: TreeSitter makes just 22 allocations per operation versus Particle's 1,765 allocations - a 99% reduction in allocation count

## Overall Assessment

TreeSitter clearly outperforms Particle across all measured metrics:

- Higher throughput (better operations/second)
- Lower latency (faster processing time)
- Significantly lower memory footprint
- More efficient memory allocation patterns

These results suggest that TreeSitter would be the preferred choice for production environments where performance and resource utilization are critical factors.