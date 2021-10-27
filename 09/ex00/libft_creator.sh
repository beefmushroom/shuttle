# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 13:20:30 by sungjuki          #+#    #+#              #
#    Updated: 2021/10/27 13:24:54 by sungjuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -type f -name "*.c" -maxdepth 1 -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -type f -name "*.o" -maxdepth 1 -delete
