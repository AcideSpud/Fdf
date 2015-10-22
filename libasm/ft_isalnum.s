# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalnum.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:25:54 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:25:55 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_isalnum(int c);
global	_ft_isalnum
extern	_ft_isalpha
extern	_ft_isdigit

_ft_isalnum:
	call	_ft_isalpha		; ft_isalpha(c)
	cmp		rax, 1
	je		.ret
	call	_ft_isdigit		; ft_isdigit(c)
.ret:
	ret
