/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:46:08 by dinoguei          #+#    #+#             */
/*   Updated: 2023/09/11 17:46:08 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void    destroy_input(t_main *main)
{
	ft_free_str(&main->input_prompt);
	free_quotes(&main->quotes);
	//if(main->ast.head == NULL)
    //	free_lexer(&main->tokens, true);
	//else
		free_lexer(&main->tokens, true);
	ft_free_array(&main->env_arr);
	//TODO: free_ast()
}

void    destroy_main(t_main *main)
{
	destroy_input(main);
	free_env(&main->env_list);
	free_env(&main->export_list);
	ft_free_str(&main->prev); //!Vamos utilizar??
}
