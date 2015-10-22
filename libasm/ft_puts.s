# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:28:57 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:28:58 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_puts(const char *s);
global _ft_puts

_ft_puts:
	xor rax, rax
	cmp rdi, 0x0				; check if rdi is null
	jne size

null_case:
	mov rdi, 1
	lea rsi, [rel null]
	mov rdx, 7
	mov rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc error					; jump if the carry flag is set (carry flag used to set errors)
	ret

size:
	cmp byte [rdi + rax], 0
	je write

inc_size:
	inc rax
	jmp size

write:
	mov rdx, rax
	mov rsi, rdi
	mov rdi, 1
	mov rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc error					; jump if the carry flag is set (carry flag used to set errors)
	mov rdi, 1
	lea rsi, [rel bn]
	mov rdx, 1
	mov rax, 0x2000004			; 0x200000x => syscall, 4 => write
	syscall
	jc error
	ret
error:
	mov rax, -1
	ret
	segment .data
	null: db "(null)", 10			; declare null as "(null)"
	bn: db 10, 0ah
