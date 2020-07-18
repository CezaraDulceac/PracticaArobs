#include <iostream>

namespace pdv
{
    template <typename TInputIt, typename TOutputIt>
    TOutputIt copy(TInputIt first, TInputIt last, TOutputIt output)
    {
        for(; first != last; ++first)
        {
            *output = *first;
            ++output;
        }
        return output;
    }

    template <typename TInputIt, typename TOutputIt, typename TPredicate>
    TOutputIt copyif(TInputIt first, TInputIt last, TOutputIt output, TPredicate pred)
    {
        for(; first != last; ++first)
        {
            if(pred(*first))
            {
                *output = *first;
                ++output;
            }
        }
        return output;
    }

    template <typename TInputIt, typename T>
    TInputIt find(TInputIt first, TInputIt last, T value)
    {
        for(; first != last; ++first)
        {
            if(*first == value)
            {
                return first;
            } 
        }
        return last;
    }

    template <typename TInputIt, typename TPredicate>
    TInputIt findif(TInputIt first, TInputIt last, TPredicate pred)
    {
        for(; first != last; ++first)
        {
            if(pred(*first))
            {
                return first;
            } 
        }
        return last;
    }

    template <typename TInputIt, typename T>
    std::size_t count(TInputIt first, TInputIt last, T value)
    {
        std::size_t val = 0;
        for(; first != last; ++first)
        {
            if(*first == value)
            {
                ++val;
            }
        }
        return val;
    }

    template <typename TInputIt, typename TPredicate>
    std::size_t countif(TInputIt first, TInputIt last, TPredicate pred)
    {
        std::size_t val = 0;
        for(; first != last; ++first)
        {
            if(pred(*first))
            {
                ++val;
            }
        }
        return val;
    }

    template <typename TInputIt, typename T>
    void fill(TInputIt first, TInputIt last, T value)
    {
        for(; first != last; ++first)
        {
            *first = value;
        }
    }

    template <typename TInputIt, typename TComparator>
    void sort(TInputIt first, TInputIt last, TComparator comp)
    {
        std::size_t ver = 1; //cand nu mai sunt modificari inseamna ca e sortat
        --last;
        while(ver)
        {
            ver = 0;
            for(TInputIt it = first; it != last; ++it)
            {
                TInputIt aux = it;
                aux += 1;
                if(!comp(*it, *aux) && *it != *aux)
                {
                    ver = 1;
                    std::swap(*it, *aux);
                }
            }
        }
    }



}