# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_max.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:27:33 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:27:34 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_max(int a, int b);
global	_ft_max

_ft_max:
	cmp		rdi, rsi
	jg		.g
	mov		rax, rsi
	ret
.g:
	mov		rax, rdi
	ret
