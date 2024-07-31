push:
	@msg="${msg}"; \
	if [ -z "$$msg" ]; then \
		msg="solutions added"; \
	fi; \
	git add . && git commit -m "$$msg" && git push origin main

.PHONY: push