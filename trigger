create or replace function disp_2() returns trigger as'
declare
begin
if new.aname=null then
raise exception''Area name not be null'';
end if;
return new;
end;'
language plpgsql;

create trigger t2
before insert on area
for each row
execute procedure disp_2();
