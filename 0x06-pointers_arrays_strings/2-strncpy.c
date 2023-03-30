#include "main.h"

/**                                                                                                                                                  
 *_strncpy - main function                                                                                                                           
 *                                                                                                                                                   
 *@dest: destination parameter                                                                                                                       
 *                                                                                                                                                   
 *@src: source parameter                                                                                                                             
 *                                                                                                                                                   
 *@n: functional parameter                                                                                                                           
 *                                                                                                                                                   
 *Return: always 0                                                                                                        
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
