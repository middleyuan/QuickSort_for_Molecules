# QuickSort_for_Molecules

Given several groups of molecules
There may be duplicated molecules
 

Each molecule has
A name string (e.g., "caffeine")
A formula string (e.g., "C8H10N4O2")
Molecular mass (can be zero or non-zero)
A zero means that your program needs to calculate the mass (Use this periodic table and double is recommended while calculating the mass )
A non-zero value means the mass is given 
 

Quicksort each group of molecules according to the ascending order of molecular mass
Always pick the first entry of each partition as the pivot
Do not count swap(array, posi, posj) if posi == posj
 

Print out the molecules and also report the number of swaps used during Quicksort
