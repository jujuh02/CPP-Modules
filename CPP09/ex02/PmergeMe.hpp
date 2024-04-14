/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:06:59 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 17:40:08 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include <iomanip>
#include <cstddef>

class PmergeMe {
    private :
        std::vector<int> vec;
        std::list<int> lst;
    public :
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        void print();
        double sorter(char **av);
        int check_is_num(char *str);
        
        void sort_vec(std::vector<int> &vec, int left, int right, int k);
        void insertion_sort_vec(std::vector<int> &vec, int left, int right);
        void merge_vec(std::vector<int> &vec, int left, int mid, int right);
		int	stringToInt(const char *str);
        void sort_lst(std::list<int> &list);

        std::list<int> merge_lst(std::list<int> &left, std::list<int> &right);
};
#endif
	