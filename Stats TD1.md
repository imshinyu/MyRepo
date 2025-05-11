# Dictionary

$$\Omega = \text{Population (the entire set of individuals or items being studied)} $$
$$ X = \text{Sample (a subset of the population)} $$
$$ \bar{x} = \text{Mean (average value)} $$
$$ Me = \text{Median (middle value in an ordered dataset)} $$
$$ Mo = \text{Mode (value with the highest frequency)} $$ $$ \sigma^2 = \text{Variance (measure of data spread; must always be positive)} $$ $$ \sigma = \text{Standard deviation (square root of variance)} $$ $$ n_i = \text{Frequency (number of times a value appears)} $$ $$ f_i = \text{Relative frequency (fraction of total count)} $$ $$ n_i^c = \text{Cumulative frequency (sum of frequencies up to a given value)} $$ $$ f_i^c = \text{Cumulative relative frequency (fraction of cumulative total)}$$

# Rules
$$
	f_i = \frac{n_i}{n} $$ $$ f_i^c = \frac{n_i^c}{n} $$ $$ n_i^c(a_i) = n_i(a_i) + n_i^c(a_i-1) $$ $$ Mo = a + (b-a) \times \frac{(n_2 - n_1)}{(n_2 - n_1) + (n_2 - n_3)} $$ $$ Mo \in [a,b[ $$ $$ \bar{x} = \frac{\sum x_i \cdot n_i}{n} \space or \space \sum f_ix_i$$ $$ \sigma^2 = \frac{\sum (n_i \cdot c_i^2)}{n} - (\frac{\sum (n_i \cdot c_i)}{n})^2$$ $$ \sigma = \sqrt{\sigma^2}$$
$$
Me = a + \left( \frac{\frac{n}{2} - n_{i-1}^c}{n_i} \right) \cdot (b - a)
$$
$$
cov(X,Y)=\frac{1}{n}​∑xy−\bar{x}×\bar{y}
$$
$$
Var(X)=\frac{∑x2}{n}​−\bar{x}^2
$$
$$
r=\frac{cov(X,Y)}{\sigma_x *\sigma_y}
$$
$$
y=a+bx \space /\space b=\frac{cov(X,Y)}{Var(X)}\space /\space a=\bar{y}-b*\bar{x}
$$
# Proba
## Arrangement
### arrangement without repetition
$$
A_k^n=\frac{n!}{(n-k)!}
$$
### arrangement with repetition
$$
A_n^k=n^k
$$
## Permutations
### Permutation without repetition
$$
P_n=n!
$$

### Permutation with repetition
$$
P_n = \frac{n!}{n_1!n_2!...n_k!}
$$
## Combinations
### Combination without repetition
$$
C_n^k=\frac{n!}{k!(n-k)!}
$$
### Combination with repetition
$$
C_n^k=\frac{(n + k − 1)!}{k!(n-1)!}
$$
-------------------------------------------------------------------------------
$$
P(A∪B)=P(A)+P(B)-P(A∩B)
$$
$$
P(C|L)=\frac{P(C∩L)}{P(L)}
$$
$$
P(C∩L)=P(L|C)*P(C)
$$