# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 13:59:34 by jeonghle          #+#    #+#              #
#    Updated: 2021/10/26 15:38:39 by jeonghle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -type f -name "*.c" -maxdepth 1 -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -type f -name "*.o" -maxdepth 1 -delete
