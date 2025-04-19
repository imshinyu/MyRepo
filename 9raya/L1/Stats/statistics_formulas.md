# Statistics Dictionary and Rules

## Dictionary

$$ - \(\Omega = \text{Population (the entire set of individuals or items being studied)}\) $$
$$ - \(X = \text{Sample (a subset of the population)}\) $$
$$ - \(\bar{x} = \text{Mean (average value)}\) $$
$$ - \(Me = \text{Median (middle value in an ordered dataset)}\) $$
$$ - \(Mo = \text{Mode (value with the highest frequency)}\) $$
$$ - \(\sigma^2 = \text{Variance (measure of data spread; always non-negative)}\) $$
$$ - \(\sigma = \text{Standard deviation (square root of variance)}\) $$
$$ - \(n_i = \text{Frequency (number of times a value appears)}\) $$
$$ - \(f_i = \text{Relative frequency (fraction of total count)}\) $$
$$ - \(n_i^c = \text{Cumulative frequency (sum of frequencies up to a given value)}\) $$
$$ - \(f_i^c = \text{Cumulative relative frequency (cumulative frequency divided by total)}\) $$

## Rules

### Frequencies
$$ - \(f_i = \frac{n_i}{n}\) $$
$$ - \(f_i^c = \frac{n_i^c}{n}\) $$
$$ - \(n_i^c(a_i) = n_i(a_i) + n_i^c(a_{i-1})\) $$

### Mean
$$ - \(\bar{x} = \frac{\sum n_i \cdot c_i}{n}\) $$

### Variance and Standard Deviation
$$ - \(\sigma^2 = \frac{\sum n_i \cdot c_i^2}{n} - \left(\frac{\sum n_i \cdot c_i}{n}\right)^2\) $$
$$ - \(\sigma = \sqrt{\sigma^2}\) $$

### Mode (Grouped Data)
$$ - \(Mo = a + \left( \frac{(n_2 - n_1)}{(n_2 - n_1) + (n_2 - n_3)} \right) \cdot (b - a)\) $$
$$ - \(a\): lower class boundary of modal class $$
$$ - \(b\): upper class boundary $$
$$ - \(n_2\): frequency of modal class $$
$$ - \(n_1\): frequency of class before modal class $$
$$ - \(n_3\): frequency of class after modal class $$
$$ - \(Mo \in [a, b[\) $$

### Median (Grouped Data)
$$ - \(Me = a + \left( \frac{\frac{n}{2} - n_{i-1}^c}{n_i} \right) \cdot (b - a)\) $$
$$ - \(a\): lower class boundary of the median class $$
$$ - \(b\): upper class boundary of the median class $$
$$ - \(n\): total number of values $$
$$ - \(n_{i-1}^c\): cumulative frequency before the median class $$
$$ - \(n_i\): frequency of the median class $$
$$ - \(Me \in [a, b[\) $$