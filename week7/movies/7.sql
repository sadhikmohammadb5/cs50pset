select movies.title,ratings.rating from movies
inner join ratings on movies.id=ratings.movie_id
and movies.year=2010 and ratings.rating>0
order by ratings.rating desc,title asc;

