objStatic = thirdPower.o fourthPower.o

static: main.o $(objStatic)
	@echo "Build static library"
	ar rc libstatic.a $(objStatic)
	ranlib libstatic.a
	gcc main.o -L. -lstatic -o result
	./result

main.o : main.c
thirdPower.o : thirdPower.c
fourthPower.o : fourthPower.c


objDynamic = thirdPowerDyn.o fourthPowerDyn.o

dynamic : main.o $(objDynamic)
	gcc -shared -o libdynamic.so $(objDynamic)
	gcc main.o -L. -ldynamic -o result
	@echo "\nPlease, run LD_LIBRARY_PATH=`pwd`:\${LD_LIBRARY_PATH}; export LD_LIBRARY_PATH. If you already done it, just ignore it."
	@echo "After that you can run again ./result \n"
	./result
 
thirdPowerDyn.o : thirdPower.c
	gcc -fPIC -c thirdPower.c -o thirdPowerDyn.o

fourthPowerDyn.o : fourthPower.c
	gcc -fPIC -c fourthPower.c -o fourthPowerDyn.o

dynamicLoading : mainDynamicLoad.o $(objDynamic)
	gcc -shared -o libdynamic.so $(objDynamic)
	gcc mainDynamicLoad.o -ldl -o result
	@echo "\nPlease, run LD_LIBRARY_PATH=`pwd`:\${LD_LIBRARY_PATH}; export LD_LIBRARY_PATH. If you already done it, just ignore it."
	@echo "After that you can run again ./result \n"

	./result

mainDynamicLoad.o : mainDynamicLoad.c


clean : 
	rm -f main.o $(objStatic) $(objDynamic) mainDynamicLoad.o libdynamic.so libstatic.a result

