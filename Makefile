RECIPES = recipeNo001 recipeNo002 recipeNo003 recipeNo004 recipeNo005 recipeNo006 recipeNo007 recipeNo008 recipeNo009 recipeNo010 recipeNo011 recipeNo012 recipeNo013 recipeNo014 recipeNo015 recipeNo016 recipeNo017 recipeNo018 recipeNo019 recipeNo020 recipeNo021 recipeNo022 recipeNo023 recipeNo024 recipeNo025 recipeNo026 recipeNo027 recipeNo028 recipeNo029 recipeNo030 recipeNo031 recipeNo032 recipeNo033 recipeNo034 recipeNo035 recipeNo037 recipeNo038 recipeNo039 recipeNo040 recipeNo042 recipeNo043 recipeNo044 recipeNo045 recipeNo046 recipeNo047 recipeNo048 recipeNo049 recipeNo050 recipeNo051 recipeNo052 recipeNo053 recipeNo054 recipeNo055 recipeNo056 recipeNoD001 


.PHONY: all

all:
	for RECIPE in ${RECIPES} ; do \
		$(MAKE) -C $${RECIPE} ; \
	done

test:
	for RECIPE in ${RECIPES} ; do \
		$(MAKE) -C $${RECIPE} test ; \
	done

clean:
	for RECIPE in ${RECIPES} ; do \
		$(MAKE) -C $${RECIPE} clean ; \
	done
