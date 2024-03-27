# **Minishell**

## :speech_balloon: **About**
Minishell is a project that seeks to  recreate a shell inspired by Bash, coded in C.

## 🙋‍♀️ **Authorship**

- [Diogo Nogueira Souza](https://github.com/souzitaaaa)
- [Jennifer Araújo](https://github.com/JenniferAraujo)
- [Joelen Cruz](https://github.com/JoelenCruz)
- [Rita Marques](https://github.com/rimarque)

## :inbox_tray: **Cloning the repository**

```shell
git clone git@github.com:rimarque/Minishell.git 
```

## 💎 **Features**
```
- Prompt display
- Lexer and parser for the input, with the use of an abstract syntax tree
- Incorporation of the echo, cd, pwd, unset, export, env and exit built-ins
- Support for pipe functionality, enabling users to chain multiple commands together
- Implementation of overwrite and append redirections (input and output, including here_doc)
- Handling expansion of environment variables and exit status
- Handling single and double quotes
- Signal handling for ctrl-C, ctrl-D and ctrl-\
- Continuous update of exit status
- Working history
```
<table align=center>
	<tbody>
		<tr>
			<td><image src="img/builtinsQuotesExpansion.png"></td>
			<td><image src="img/PipesRedirections.png"></td>
		</tr>
	</tbody>
</table>

## :link: **Compilation**
To compile the program you should run `make`.

This rule will generate an executable file named `minishell`. To launch the executable you should follow this syntax:

```sh
$ ./minishell
```
