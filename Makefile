.PHONY: file clean

TEMPLATE := templates/cpp_file_init.cpp

file:
	@if [ -z "$(path)" ]; then \
		echo "❌ Usage: make file path=folder/problem_name"; \
		exit 1; \
	fi
	@if [ ! -f "$(TEMPLATE)" ]; then \
		echo "❌ Template file not found: $(TEMPLATE)"; \
		exit 1; \
	fi
	@FILE="$(path).cpp"; \
	DIR=$$(dirname "$$FILE"); \
	if [ "$$DIR" != "." ]; then \
		mkdir -p "$$DIR"; \
	fi; \
	if [ -f "$$FILE" ]; then \
		echo "⚠️  $$FILE already exists"; \
		exit 1; \
	fi; \
	cp "$(TEMPLATE)" "$$FILE"; \
	echo "✅ Created $$FILE from template"

clean:
	@echo "🧹 Cleaning compiled binaries (Linux / Windows / macOS)..."
	@find . -type f \( \
		-perm /111 -o \
		-name "*.exe" -o \
		-name "*.out" \
	\) ! -name "*.cpp" ! -name "*.h" -delete
	@echo "✅ Clean complete"