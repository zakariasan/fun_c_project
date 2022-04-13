TARGET :=ft_cat 
LIB_NAME := libft.a
SRCS := $(shell find ./srcs -name '*.c')
HEADER :=includes

all :$(TARGET) $(LIB_NAME) 
	@./$(TARGET)
$(TARGET) : $(LIB_NAME) main.c
	gcc -g -o $(TARGET) main.c -L. -lft

$(LIB_NAME): 
	gcc -I $(HEADER) -c $(SRCS)
	ar rc $(LIB_NAME) *.o
	ranlib $(LIB_NAME)

clean :
	rm *.o
fclean : 
	rm libft.a $(TARGET)
re : fclean all
