/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:53:21 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/12/13 11:16:56 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		T *arr;
		unsigned int n;
	public :
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		~Array();
		Array& operator = (const Array& copy);
		T& operator [] (int index);

		class throwException : public std::exception{
			public :
				virtual const char* what() const throw();
		};
		
		unsigned int	size() const;
};

#include "Array.tpp"


#endif
