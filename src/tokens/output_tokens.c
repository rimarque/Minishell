/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_tokens.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:45:44 by dinoguei          #+#    #+#             */
/*   Updated: 2023/08/22 15:45:44 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

//* Funcao de ajuda para a get_rdr_out que verifica
bool    is_space(char c)
{
    if (ft_strchr(" ", c))
        return true;
    return false;
}

//* Aqui vai identificar para onde se vai mandar o output do caracter
void    get_rdr_out(t_main *main, int *i, t_type token)
{
    int     start = 0;
    char    *str;
    bool	run = true;

    while (is_space(main->input_prompt[*i]) == true)
        (*i)++;
    start = *i;
	while (*i <= main->tokens.str_len && run && main->input_prompt[*i])
	{
        if (special_chr(main->input_prompt[*i]) == true
            && check_index_quotes(main, i) == false)
            break ;
		if (is_space(main->input_prompt[*i]) == false)
			(*i)++;
		else if (check_index_quotes(main, i) == false)
			run = false;
		else
			(*i)++;
	}
    str = ft_substr(main->input_prompt, start, (*i - start));
    //printf("str output: %s\n", str);
    add_token(main, token, str);
    (*i)--;
	free(str);
}

//* Esta funcao identifica os caracteres de output, quer append quer redirect
void    search_output_tokens(t_main *main, int *i)
{
    if (*i + 1 <= main->tokens.str_len && main->input_prompt[*i + 1] == OUT)
	{
		(*i) += 2;
		get_rdr_out(main, i, APPEND);
	}
	else
	{
	    (*i)++;
	    get_rdr_out(main, i, OUT);
	}
}
