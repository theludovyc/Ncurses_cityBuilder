OK_COLOR = \033[0;32m

a.out:
	@g++ -o $@ main.cc -lncurses -w
	@printf "%b" "$(OK_COLOR)compil success\n"

clean:
	@rm -rf a.out
	@printf "clean success\n"