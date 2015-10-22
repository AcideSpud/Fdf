# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:30:20 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:30:21 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_toupper(int c);
global	_ft_toupper

_ft_toupper:
	mov		rax, rdi
	cmp		rax, 'a'
	jl		.ret
	cmp		rax, 'z'
	jg		.ret
	sub		rax, 32
.ret:
	ret
