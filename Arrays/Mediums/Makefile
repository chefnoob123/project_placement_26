# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++23

# The % is a wildcard. 
# This rule says: "To create any executable, find the .cpp file with the same name"
%: %.cpp
	@printf "Compiling $<\nSuccess!\n"
	@$(CXX) $(CXXFLAGS) $< -o $@
	@printf "\n--- Running Output ---\n"
	@./$@

clean:
	rm -f $(filter-out %.cpp %.h Makefile, $(wildcard *))
