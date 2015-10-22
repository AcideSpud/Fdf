# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_min.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:28:11 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:28:13 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_min(int a, int b);
global	_ft_min

_ft_min:
	cmp		rdi, rsi
	jl		.l
	mov		rax, rsi
	ret
.l:
	mov		rax, rdi
	ret
