<h1 align="center">
	 🧮 push_swap
</h1>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/koraymullaoglu/push_swap?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/mullaoglukoray' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#contributing">Contributing</a> •
	<a href="#license">License</a>
</p>

## ABOUT
**push_swap** is a sorting algorithm project for arranging numbers in ascending order using two stacks and a limited set of operations. The goal is to implement the most efficient sorting algorithm with the least number of operations.



## HOW TO USE
#### 1º - Clone the repository
```git
git clone git@github.com:koraymullaoglu/push_swap.git
```

#### 2º - Enter the project folder
```bash
cd push_swap
make
```

#### MAKEFILE RULES

`make` or `make all` - Compile pipex files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object files) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.

## MANDATORY
> There are two stacks, a and b (where stack a contains unsorted numbers, and stack b is initially empty).
- The task is to sort the elements in stack a using the minimum number of pushswap actions.
- The actions performed should be printed to the terminal.



## NORMINETTE
> At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```

* [42 Norms](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - Tool to respect the code norm, made by 42. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

## CONTRIBUTING

If you find any issues or have suggestions for improvements, feel free to fork the repository and open an issue or submit a pull request.

## LICENSE

This project is available under the MIT License. For further details, please refer to the [LICENSE](https://github.com/koraymullaoglu/push_swap/blob/main/LICENSE) file.
