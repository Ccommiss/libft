#include "libft.h"

char	*ft_ftoa(float n, int afterpoint)
{
    // Extract integer part 
    int ipart = (int)n; 
  
    // Extract floating part 
    float fpart = n - (float)ipart; 
  
    // convert integer part to string 
    char *res = ft_itoa(ipart); 
    char *res2 = NULL;
  
    // check for display option after point 
    if (afterpoint != 0) 
    { 
        res = ft_strjoin(res, "."); 
        // Get the value of fraction part upto given no. 
        // of points after dot. The third parameter  
        // is needed to handle cases like 233.007 
        fpart = fpart * pow(10, afterpoint); 
        res2 = ft_itoa((int)fpart); 
    } 
    char *final = ft_strjoin(res, res2);
    free(res);
    free(res2);
    return (final);
}