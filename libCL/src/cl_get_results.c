/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cl_get_results.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlov <vkozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 12:48:00 by vkozlov           #+#    #+#             */
/*   Updated: 2018/03/12 13:02:59 by vkozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_cl.h"

void	cl_get_res(t_cl *cl, size_t size,
								unsigned int *result, cl_uint arg_index)
{
	cl_int			ret;

	ret = clEnqueueReadBuffer(cl->commands, cl->args[arg_index], CL_TRUE,
						0, size, result, 0, NULL, NULL);
	if (ret != CL_SUCCESS)
	{
		ft_printf("Error while getting the results. Code:[%d]\n", ret);
		exit(1);
	}
}
